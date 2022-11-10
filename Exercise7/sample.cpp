class Sample
{
    private:
        int x;
        double y;
    public :
        Sample(){
            x = 0;
            y = 0;
        }
        Sample(int x){
            this->x = x;
            y = 0; 
        }
        Sample(int x, int y){
            this->x = x;
            this->y = y;
        }
        Sample(int, double){
            this->x = x;
            this->y = y;
        }
};