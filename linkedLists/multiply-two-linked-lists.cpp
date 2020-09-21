def multiplyTwoList(head1, head2):
    num1=""
    num2=""
    while(head1!=None):
        num1+=str(head1.data)
        head1=head1.next
    while(head2!=None):
        num2+=str(head2.data)
        head2=head2.next
    ans=((int(num1))*(int(num2))) % MOD
    return ans
