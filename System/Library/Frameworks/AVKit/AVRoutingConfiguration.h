//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVRoutingConfiguration : NSObject
{
    _Bool _isDefault;	// 8 = 0x8
    NSString *_outputContextID;	// 16 = 0x10
    unsigned long long _sharingPolicy;	// 24 = 0x18
}

+ (id)configurationWithOutputContextID:(id)arg1 sharingPolicy:(unsigned long long)arg2;	// IMP=0x00000000000fe2d1
+ (id)defaultConfiguration;	// IMP=0x00000000000fe2b4
- (void).cxx_destruct;	// IMP=0x00000000000fe2a4
@property(readonly, nonatomic) unsigned long long sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(readonly, nonatomic) NSString *outputContextID; // @synthesize outputContextID=_outputContextID;
- (_Bool)isDefault;	// IMP=0x00000000000fe287

@end
