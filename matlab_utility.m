% matlab animation template
% we have xhis[] yhis[]
plot(xhis,yhis)
hold on
for n=1:length(xhis)
  p = plot(xhis[n], yhis[n])
  pause(0.01)
  delete(p)
end
hold off

