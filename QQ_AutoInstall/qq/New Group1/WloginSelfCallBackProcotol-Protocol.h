//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableData, UserLoginProcess, WloginErrInfo, WloginMbPhoneInfo, WloginUserInfo;

@protocol WloginSelfCallBackProcotol <NSObject>
- (void)protocolVerifyPwdResult:(UserLoginProcess *)arg1 result:(int)arg2 withErrInfo:(WloginErrInfo *)arg3;
- (void)protocolSetPwdFlag:(UserLoginProcess *)arg1 andPwdFlag:(BOOL)arg2;
- (void)protocolInputSmsCodeBySmsVerifyLogin:(UserLoginProcess *)arg1;
- (void)protocolInputSmsCode:(UserLoginProcess *)arg1 andMbPhone:(WloginMbPhoneInfo *)arg2;
- (void)protocolShowPicture:(UserLoginProcess *)arg1 picData:(NSData *)arg2 wording:(NSDictionary *)arg3;
- (void)protocolLoginError:(UserLoginProcess *)arg1 result:(int)arg2 withErrInfo:(WloginErrInfo *)arg3;
- (void)protocolLoginFailed:(UserLoginProcess *)arg1 result:(int)arg2 withErrInfo:(WloginErrInfo *)arg3;
- (void)protocolNegotiateSecGUID:(UserLoginProcess *)arg1;
- (void)protocolLoginSuccessSig:(UserLoginProcess *)arg1 sig:(NSMutableArray *)arg2 andBaseInfo:(WloginUserInfo *)arg3 andPasswdSig:(NSMutableData *)arg4;
- (void)caculateChallenge:(UserLoginProcess *)arg1;
@end

