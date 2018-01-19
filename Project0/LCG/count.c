
/*Counts how many times each number is registered and stores it into *
 *the array that was passed in as an argument.                       */

void count(float number, int no_times[10])
{
  if(number >= 0.0 && number < 0.1){
    no_times[0]++;
  }
  else if(number >= 0.1 && number < 0.2){
    no_times[1]++;
  }
  else if(number >= 0.2 && number < 0.3){
    no_times[2]++;
  }
  else if(number >= 0.3 && number < 0.4){
    no_times[3]++;
  }
  else if(number >= 0.4 && number < 0.5){
    no_times[4]++;
  }
  else if(number >= 0.5 && number < 0.6){
    no_times[5]++;
  }
  else if(number >= 0.6 && number < 0.7){
    no_times[6]++;
  }
  else if(number >= 0.7 && number < 0.8){
    no_times[7]++;
  }
  else if(number >= 0.8 && number < 0.9){
    no_times[8]++;
  }
  else if(number >= 0.9 && number < 1.0){
    no_times[9]++;
  }
}
