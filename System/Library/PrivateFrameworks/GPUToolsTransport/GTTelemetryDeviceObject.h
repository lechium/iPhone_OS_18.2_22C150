//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTelemetryRecordObject;

@interface GTTelemetryDeviceObject : NSObject
{
    unsigned long long _streamRef;	// 8 = 0x8
    GTTelemetryRecordObject *_gpuTime;	// 16 = 0x10
    unsigned long long _commits;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000347fc
- (void).cxx_destruct;	// IMP=0x00000000000349d6
@property(nonatomic) unsigned long long commits; // @synthesize commits=_commits;
@property(retain, nonatomic) GTTelemetryRecordObject *gpuTime; // @synthesize gpuTime=_gpuTime;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
- (id)description;	// IMP=0x0000000000034955
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000348d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034804

@end

