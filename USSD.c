#include <stdio.h>

int main(){

    //making a mobile money menu//
    printf("Mobile Money\n");
    printf("1. Send Money\n");
    printf("2. Airtime & Bundles\n");
    printf("3. Momopay\n");
    printf("4. Payments\n");
    printf("5. Savings and Loans\n");
    printf("6. Financial Services\n");
    printf("7. Withdraw Money\n");
    printf("8. My Account\n");
    //defining the variables before using them//
    int menu, send_money, Momopay, Account_balance=10000;
    int Airtime_Bundles, Payments, Savings_Loans, Financial_Services;
    int Withdraw, Account, PIN, transactions;
    scanf("%d", &menu);

    switch(menu){
        case 1:
        printf("Send Money\n");
        printf("1. Mobile user\n");
        printf("2. Africa\n");
        printf("3. Rest of the World\n");
        printf("4. Send with Care\n");
        printf("5. Doantions\n");
        printf("0. Back\n");
        scanf("%d", &send_money);
        switch(send_money){
            case 1:
            printf("Enter number that you are sending to\n");
            scanf("%d", &send_money);
            break;
            case 2:
            printf("Africa\n");
            printf("1. Eastern Africa\n");
            printf("2. Southern Africa\n");
            printf("3. Western Africa\n");
            printf("4. Central Africa\n");
            printf("5. Northern Africa\n");
            printf("0. Back");
            scanf("%d", &send_money);
            break;
            case 3:
            printf("Rest of the World\n");
            printf("1. Asia\n");
            printf("2. Middle East\n");
            printf("3. Europe\n");
            printf("4. America\n");
            printf("0. Back\n");
            scanf("%d", &send_money);
            break;
            case 4:
            printf("Send with Care\n");
            printf("1. Mobile User\n");
            printf("2. Favourites\n");
            printf("3. School Fees\n");
            printf("4. MyCaretaker\n"); 
            printf("5. AYO Send with Care Balances or Claim");
            printf("0. Back\n");
            scanf("%d", &send_money);
            break;
            case 5:
            printf("Enter Code\n");
            scanf("%d", &send_money);
            break;
            case 0:
            //go back to the main menu//
            break;
        }
        break;
        case 2:
        printf("Airtime & Bundles\n");
        printf("1. Airtime\n");
        printf("2. Voice Bundles\n");
        printf("3. internet Bundles\n");
        printf("4. Freedom Bundles\n");
        printf("5. Special Bundles\n");
        printf("6. WakaNet\n");
        printf("7. SMS Bundles\n");
        printf("0. Back\n");
        printf("00. Next\n");
        scanf("%d", &Airtime_Bundles);

        switch(Airtime_Bundles){

        }
        break;
        case 3:
        printf("Momopay\n");
        printf("Please Enter invoice ID or Merchant Code\n");
        scanf("%d", &Momopay);
        break;
        case 4:
        printf("Payment\n");
        printf("1. Utilities\n");
        printf("2. Pay TV\n");
        printf("3. School fees\n");
        printf("4. Goods & Services\n");
        printf("5. Fees & Taxes\n");
        printf("6. Lotto & Sports Betting\n");
        printf("7. Music & Video\n");
        printf("0. Back\n");
        printf("00. Next\n");
        scanf("%d", &Payments);
        break;
        case 5:
        printf("Savings & Loans\n");
        printf("1. Mokash\n");
        printf("2. MTN Depo\n");
        printf("3. MoMo Advance\n");
        printf("4. ClinicPesa\n");
        printf("5. MoSente\n");
        printf("6. MKOPA Loan\n");
        printf("7. XENO Investment\n");
        printf("8. TakeNow\n");
        printf("0. Back\n");
        scanf("%d", &Savings_Loans);
        break;
        case 6:
        printf("Financial Services\n");
        printf("1. Bank Deposit\n");
        printf("2. Bank Withdraw\n");
        printf("3. SACCO\n"); 
        printf("4. pension schemes\n");
        printf("5. MTN MoMocard\n");
        printf("6. uganda Securities Exchange\n");
        printf("0. Back\n");
        scanf("%d", &Financial_Services);
        break;
        case 7:
        printf("Withdraw Money\n");
        printf("1. From ATM\n");
        printf("0. Back\n");
        scanf("%d", &Withdraw);
        break;
        case 8:
        printf("My Account\n");
        printf("1. Check Balance\n");
        printf("2. Fees Calculator\n");
        printf("3. My Approvals\n");
        printf("4. My Transactions\n");
        printf("5. Change PIN\n");
        printf("6. PIN reset\n");
        printf("7. Initial Reversal\n");
        printf("0. Back\n");
        printf("00. Next\n");
        switch(Account){
        case 1:
            printf("Enter PIN\n");
            scanf("%d", &PIN);
            break;
        case 2:
            printf("Fees calculator\n");
            printf("1. Send And withdraw Money\n");
            printf("2. payments\n");
            scanf("%d", &Account);
            break;
        case 3:    
            printf("1. My Approvals\n");
            printf("2. View my Authorisations\n");
            printf("3. my Sub Approvals\n");
            printf("0. Back\n");
            break;
        case 4:
            printf("My Transactions\n");
            printf("1. mini-Statement\n");
            printf("2. Request-Statement\n");
            printf("0. Back\n");
            break;
        case 5:
            printf("Enter old PIN\n");
            scanf("%d", &PIN);
            break;
        case 6:
            printf("PIN Reset\n");
            printf("1. Self-Help\n");
            printf("2. Assisted\n");
            printf("0. Back\n");
            scanf("%d", &Account);
            break;
        case 7:
            printf("Select transaction\n");
            printf("1. UGX 4000 to 256782532752\n");
            printf("2. UGX 6000 to 256782532752\n");
            printf("3. UGX 20000 to 256754114052\n");
            scanf("%d", &transactions);    
        default:
            break;
        }
        break;
    default:
        printf("invalid request!!! please try again...");
    }
return 0;
}