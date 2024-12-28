//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSDictionary, NSString;

@interface IDSReportClientEventMessage : FTIDSMessage
{
    NSDictionary *_report;	// 232 = 0xe8
    NSString *_reportType;	// 240 = 0xf0
    NSString *_hardwareVersion;	// 248 = 0xf8
    NSString *_osVersion;	// 256 = 0x100
    NSDictionary *_responseMessage;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000000e9847
@property(copy) NSDictionary *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy) NSString *reportType; // @synthesize reportType=_reportType;
@property(copy) NSDictionary *report; // @synthesize report=_report;
- (void)handleResponseBody:(id)arg1;	// IMP=0x00100000000e94a8
- (id)parsedIDSMessageResult;	// IMP=0x00100000000e9496
- (id)messageBody;	// IMP=0x00100000000e92ef
- (id)requiredKeys;	// IMP=0x00100000000e9296
- (id)bagKey;	// IMP=0x00100000000e9289
- (_Bool)wantsIDSProtocolVersion;	// IMP=0x00100000000e9281
- (double)anisetteHeadersTimeout;	// IMP=0x00100000000e9273
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e9194
- (id)init;	// IMP=0x00100000000e9140

@end
