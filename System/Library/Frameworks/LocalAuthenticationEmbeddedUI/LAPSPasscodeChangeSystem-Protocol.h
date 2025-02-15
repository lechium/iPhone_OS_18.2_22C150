//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class LAPSFetchNewPasscodeRequest, LAPSFetchNewPasscodeResult, LAPSFetchOldPasscodeRequest, LAPSFetchOldPasscodeResult, LAPSPasscode, NSDate;

@protocol LAPSPasscodeChangeSystem <NSObject>
- (void)changePasscode:(LAPSFetchOldPasscodeResult *)arg1 to:(LAPSFetchNewPasscodeResult *)arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)canChangePasscodeWithError:(id *)arg1;
- (void)verifyNewPasscode:(LAPSPasscode *)arg1 completion:(void (^)(NSError *))arg2;
- (void)verifyPasscode:(LAPSPasscode *)arg1 completion:(void (^)(NSError *))arg2;
- (NSDate *)lastPasscodeChange;
- (_Bool)hasPasscode;
- (LAPSFetchNewPasscodeRequest *)newPasscodeRequest;
- (LAPSFetchOldPasscodeRequest *)oldPasscodeRequest;
@end

