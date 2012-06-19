#!/usr/bin/env ruby
a=0;b=80;d=1;loop{$><<' '*a+'*'+' '*(b-a);$>.flush;sleep 0.01;$><<"\x0d";a+=d;d=-d if(a<1||a>=b)}