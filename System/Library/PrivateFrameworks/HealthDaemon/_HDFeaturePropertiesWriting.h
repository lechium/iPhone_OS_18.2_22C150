//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _HDFeaturePropertiesWriting : NSObject
{
    NSString *_localDomain;	// 8 = 0x8
    NSUserDefaults *_userDefaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000046835c
- (void)synchronize;	// IMP=0x00000000004682c5
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004682af
- (id)initWithLocalDomain:(id)arg1;	// IMP=0x0000000000468217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
