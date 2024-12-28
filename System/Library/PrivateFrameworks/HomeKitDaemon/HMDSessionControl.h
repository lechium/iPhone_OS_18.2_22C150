//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSessionControl : HAPTLVBase
{
    unsigned long long _controlCommand;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001e4481
- (void).cxx_destruct;	// IMP=0x00000000001e446e
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) unsigned long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e43b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e426f
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001e4105
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001e3eaa
- (id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000000001e3e2a

@end
