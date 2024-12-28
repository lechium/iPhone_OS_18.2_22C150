//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAlwaysOnDateSpecifier, BLSHEnvironmentDatesModel, NSDateInterval, NSEnumerator;
@protocol BLSHBacklightSceneHostEnvironment;

__attribute__((visibility("hidden")))
@interface BLSHEnvironmentDatesEnumerator : NSObject
{
    BLSAlwaysOnDateSpecifier *_specifier;	// 8 = 0x8
    NSEnumerator *_enumerator;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
    id <BLSHBacklightSceneHostEnvironment> _environment;	// 32 = 0x20
    BLSHEnvironmentDatesModel *_sourceModel;	// 40 = 0x28
}

+ (id)createWithInitialSpecifier:(id)arg1 enumerator:(id)arg2 dateInterval:(id)arg3 environment:(id)arg4 sourceModel:(id)arg5;	// IMP=0x00600000000299fd
- (void).cxx_destruct;	// IMP=0x0000000000029d89
@property(readonly, nonatomic) BLSHEnvironmentDatesModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(readonly, nonatomic) id <BLSHBacklightSceneHostEnvironment> environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) BLSAlwaysOnDateSpecifier *specifier; // @synthesize specifier=_specifier;
- (id)description;	// IMP=0x0000000000029c72

@end
