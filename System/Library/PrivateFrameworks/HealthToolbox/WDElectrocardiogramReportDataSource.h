//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKElectrocardiogram, HKHealthStore, NSDateComponents, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramReportDataSource : NSObject
{
    HKElectrocardiogram *_sample;	// 8 = 0x8
    UIColor *_tintColor;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    long long _activeAlgorithmVersion;	// 32 = 0x20
    NSString *_firstName;	// 40 = 0x28
    NSString *_lastName;	// 48 = 0x30
    NSDateComponents *_dateOfBirthComponents;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000142d1
@property(retain, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) long long activeAlgorithmVersion; // @synthesize activeAlgorithmVersion=_activeAlgorithmVersion;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
- (void)_fetchDemographicInformation;	// IMP=0x000000000001407d
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 activeAlgorithmVersion:(long long)arg3;	// IMP=0x0000000000013fa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

