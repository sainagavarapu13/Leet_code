int distMoney(int money, int children) {
    if (money < children) return -1;
    money -= children;
    int cnt = money / 7;
    int remaining = money % 7;
    if (remaining==3 && cnt==0) return cnt;
    else if(remaining==0 && cnt<=children) return cnt;
    else if (remaining==3 && cnt==children-1) return cnt-1;
    else if(remaining==0 && cnt>=children) return children-1;
    else if(remaining!=0 && cnt>=children) return children-1;
    return cnt;
}