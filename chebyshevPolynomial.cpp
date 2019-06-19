#include <iostream>
#include <fstream>


//============================================================================
// Name: integrate_trapz
// Parameter f: A mathematical function
// Parameter a: Lower bound
// Parameter b: Upper bound
// Description: Compute the integral of the function  f in [a,b] using the
// trapeze method
// Return I: The value of the integral
//============================================================================
double chesbyshev_1(double x, int n){
    double tnm2=1;
    double tnm1=x;
    double tn;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else{
        for(int i=0; i<n-1;i++){
            tn=(2*x*tnm1)-tnm2;
            tnm2=tnm1;
            tnm1=tn;
        }

    return tn;
    }
}


//============================================================================
// Name: integrate_trapz
// Parameter f: A mathematical function
// Parameter a: Lower bound
// Parameter b: Upper bound
// Description: Compute the integral of the function  f in [a,b] using the
// trapeze method
// Return I: The value of the integral
//============================================================================
void generateChesbyshev_1(int n){
    double x;

    std::ofstream output("chesbyshev_1.txt", std::ios::trunc);
    if(output.is_open()){
        for(x=-1.; x<=1.0001;x+=0.001){
            output<<x<<"\t"<<chesbyshev_1(x,n)<< std::endl;
        }
    }
    else{
        std::cout<<"can't write in ""chesbyshev_1.txt"" "<<std::endl;
    };
}


//============================================================================
// Name: integrate_trapz
// Parameter f: A mathematical function
// Parameter a: Lower bound
// Parameter b: Upper bound
// Description: Compute the integral of the function  f in [a,b] using the
// trapeze method
// Return I: The value of the integral
//============================================================================
double chesbyshev_2(double x, int n){
    double unm2=1;
    double unm1=2*x;
    double un;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 2*x;
    }
    else{
        for(int i=0; i<n-1;i++){
            un=(2*x*unm1)-unm2;
            unm2=unm1;
            unm1=un;
        }

    return un;
    }
}


//============================================================================
// Name: integrate_trapz
// Parameter f: A mathematical function
// Parameter a: Lower bound
// Parameter b: Upper bound
// Description: Compute the integral of the function  f in [a,b] using the
// trapeze method
// Return I: The value of the integral
//============================================================================
void generateChesbyshev_2(int n){
    double x;

    std::ofstream output("chesbyshev_2.txt", std::ios::trunc);
    if(output.is_open()){
        for(x=-1.; x<=1.0001;x+=0.001){
            output<<x<<"\t"<<chesbyshev_2(x,n)<< std::endl;
        }
    }
    else{
        std::cout<<"can't write in ""chesbyshev_2.txt"" "<<std::endl;
    };
}
