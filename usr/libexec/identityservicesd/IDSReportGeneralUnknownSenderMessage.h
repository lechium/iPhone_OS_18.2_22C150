//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSDictionary, NSString;

@interface IDSReportGeneralUnknownSenderMessage : FTIDSMessage
{
    NSDictionary *_unknownSenderInfo;	// 232 = 0xe8
    NSString *_responseMessage;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x002000000032d989
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSDictionary *unknownSenderInfo; // @synthesize unknownSenderInfo=_unknownSenderInfo;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000032d7d3
- (id)messageBody;	// IMP=0x001000000032d755
- (id)requiredKeys;	// IMP=0x001000000032d71b
- (id)bagKey;	// IMP=0x001000000032d70e
- (double)anisetteHeadersTimeout;	// IMP=0x001000000032d700
- (_Bool)wantsManagedRetries;	// IMP=0x001000000032d6f8
- (_Bool)wantsBodySignature;	// IMP=0x001000000032d6f0
- (int)maxTimeoutRetries;	// IMP=0x001000000032d6e5
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x001000000032d6dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000032d62c
- (id)init;	// IMP=0x001000000032d5d8

@end

