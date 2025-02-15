//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSString;

@interface IDSReportApprovedTempUser : FTIDSMessage
{
    NSString *_tempUserID;	// 232 = 0xe8
    long long _reportAction;	// 240 = 0xf0
    NSString *_responseMessage;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0020000000003bc1
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property long long reportAction; // @synthesize reportAction=_reportAction;
@property(copy) NSString *tempUserID; // @synthesize tempUserID=_tempUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000000039e9
- (id)messageBody;	// IMP=0x00100000000038e9
- (id)requiredKeys;	// IMP=0x0010000000003890
- (id)bagKey;	// IMP=0x0010000000003883
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000003875
- (_Bool)wantsManagedRetries;	// IMP=0x001000000000386d
- (_Bool)wantsBodySignature;	// IMP=0x0010000000003865
- (int)maxTimeoutRetries;	// IMP=0x001000000000385a
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x0010000000003852
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003784
- (id)init;	// IMP=0x0010000000003730

@end

