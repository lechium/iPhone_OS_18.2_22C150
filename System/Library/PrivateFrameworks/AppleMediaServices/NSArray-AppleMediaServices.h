//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (AppleMediaServices)
+ (void)ams_enumerateObjectsForArrays:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000054d93d
+ (id)ams_arrayWithItem:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000054d66e
- (id)ams_reduceWithInitialResult:(id)arg1 updateAccumulatingResult:(CDUnknownBlockType)arg2;	// IMP=0x001000000054e69f
- (id)ams_objectAtIndex:(long long)arg1;	// IMP=0x001000000054e649
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;	// IMP=0x001000000054e42a
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000054e26e
- (id)ams_mapWithTransformIgnoresNil:(CDUnknownBlockType)arg1;	// IMP=0x001000000054e0b0
- (id)ams_invertedDictionaryUsingTransformIgnoresNil:(CDUnknownBlockType)arg1;	// IMP=0x001000000054dec4
- (id)ams_invertedDictionaryUsingTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000054dd9a
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054dc44
- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054da9b
- (id)ams_dictionaryUsingTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000054d751
- (_Bool)ams_concurrentAnyWithTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054d737
- (_Bool)ams_concurrentAllWithTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054d71d
- (id)ams_arrayByRemovingObjectsFromArray:(id)arg1;	// IMP=0x001000000054d5d8
- (_Bool)ams_anyWithTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054d5c1
- (_Bool)ams_anyWithOptions:(unsigned long long)arg1 test:(CDUnknownBlockType)arg2;	// IMP=0x001000000054d372
- (_Bool)ams_allWithTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000054d35b
- (_Bool)ams_allWithOptions:(unsigned long long)arg1 test:(CDUnknownBlockType)arg2;	// IMP=0x001000000054d104
- (id)ams_sanitizedForSecureCoding;	// IMP=0x001000000054d03a
@property(readonly, nonatomic) NSString *hashedDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
