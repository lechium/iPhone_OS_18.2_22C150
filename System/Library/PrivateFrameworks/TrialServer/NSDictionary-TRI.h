//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TRI)
+ (void)triKeys:(id *)arg1 values:(id *)arg2 fromDictionary:(id)arg3;	// IMP=0x0050000000043ab3
- (id)triObjectForExpectedKey:(id)arg1;	// IMP=0x0010000000043d5d
- (void)triKeys:(id *)arg1 values:(id *)arg2;	// IMP=0x0010000000043d41
- (id)tri_contextValueWithName:(id)arg1;	// IMP=0x0010000000153a8b
- (id)getContextValueWithName:(id)arg1;	// IMP=0x0010000000153a79
- (id)triTransformValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000018a9c2
- (id)triItemsInDagWithSource:(id)arg1;	// IMP=0x001000000018a719
- (id)triItemsInDagWithSink:(id)arg1;	// IMP=0x001000000018a69f
- (id)triReversedDag;	// IMP=0x001000000018a39a
- (id)triDataValueFromBase64StringForField:(id)arg1;	// IMP=0x00100000001a4460
- (id)triDateForField:(id)arg1;	// IMP=0x00100000001a4349
- (id)triDataForField:(id)arg1;	// IMP=0x00100000001a4232
- (id)triArrayValueForField:(id)arg1 isNestedValue:(_Bool)arg2;	// IMP=0x00100000001a40d5
- (id)triStringValueForField:(id)arg1 isNestedValue:(_Bool)arg2;	// IMP=0x00100000001a3f85
- (id)triNumberValueForField:(id)arg1 isNestedValue:(_Bool)arg2;	// IMP=0x00100000001a3e35
- (id)triValueFromNestedField:(id)arg1;	// IMP=0x00100000001a3dd6
@end
