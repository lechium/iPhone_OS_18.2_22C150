//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WFUserDefaultsPersistence : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003d29
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (_Bool)synchronize;	// IMP=0x0000000000003cc2
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000003c4d
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000003bdf
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000003b54
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000003ada
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000003a60
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000039e6
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000000396c
- (id)init;	// IMP=0x000000000000390b
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x00000000000038a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
