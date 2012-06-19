#!/usr/bin/env ruby

require 'curses'
include Curses

CH = [' '] + %w( . , : ; + x * % # )

def ch(v) # v = 0 ... 1
  CH[(v*10).to_i]
end

def f(x, y, t) # x,yt = 0 ... 1
  (1+Math.cos((5-0.15*x)*(3+0.1*y)*Math.sin(t*1.57)))/2
end

screen = init_screen
nl
noecho
srand

begin
  t = 0.1
  d = 1
  loop do
    max_x = screen.maxx
    max_y = screen.maxy
    (0...max_y).each do |y|
      line = (0...max_x).map { |x| ch f(x, y, t) }.join
      setpos y, 0
      addstr line
    end
    refresh
    sleep 0.01
    t += 0.01 * d
    d = -d if t > 1 || t < 0
  end
ensure
  close_screen
end
