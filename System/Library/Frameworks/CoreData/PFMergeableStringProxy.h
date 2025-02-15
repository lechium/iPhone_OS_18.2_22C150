//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObject, NSString;
@protocol NSMergeableTransformableStringAttributeValue;

__attribute__((visibility("hidden")))
@interface PFMergeableStringProxy : NSObject
{
    NSManagedObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSObject<NSMergeableTransformableStringAttributeValue> *_mergeableString;	// 24 = 0x18
}

+ (_Bool)supportsMergeableTransformable;	// IMP=0x00100000000735fd
- (void)merge:(id)arg1;	// IMP=0x00000000000735e7
- (id)computedValue;	// IMP=0x00000000000735d1
- (void)setString:(id)arg1;	// IMP=0x000000000007356b
- (void)replaceSubrange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000000734f2
- (void)removeSubrange:(struct _NSRange)arg1;	// IMP=0x0000000000073481
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000073410
- (void)appendString:(id)arg1;	// IMP=0x00000000000733aa
- (void)dealloc;	// IMP=0x000000000007328e
- (id)initWithContainer:(id)arg1 key:(id)arg2 mergeableString:(id)arg3;	// IMP=0x000000000007320a
- (id)init;	// IMP=0x0000000000073197

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

