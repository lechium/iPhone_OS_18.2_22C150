//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSDictionary, NSString;

@interface IDSReportGeneralSpamMessage : FTIDSMessage
{
    NSDictionary *_spamMessage;	// 232 = 0xe8
    NSString *_responseMessage;	// 240 = 0xf0
    NSDictionary *_responseSpamMessage;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x002000000005bd73
@property(copy) NSDictionary *responseSpamMessage; // @synthesize responseSpamMessage=_responseSpamMessage;
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSDictionary *spamMessage; // @synthesize spamMessage=_spamMessage;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000005bb55
- (id)messageBody;	// IMP=0x001000000005bad7
- (id)requiredKeys;	// IMP=0x001000000005ba9d
- (id)bagKey;	// IMP=0x001000000005ba90
- (double)anisetteHeadersTimeout;	// IMP=0x001000000005ba82
- (_Bool)wantsManagedRetries;	// IMP=0x001000000005ba7a
- (_Bool)wantsBodySignature;	// IMP=0x001000000005ba72
- (int)maxTimeoutRetries;	// IMP=0x001000000005ba67
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x001000000005ba5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005b980
- (id)init;	// IMP=0x001000000005b92c

@end
