//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface CKQuadTreeNode : NSObject
{
    CKQuadTreeNode *_topRight;	// 8 = 0x8
    CKQuadTreeNode *_topLeft;	// 16 = 0x10
    CKQuadTreeNode *_bottomLeft;	// 24 = 0x18
    CKQuadTreeNode *_bottomRight;	// 32 = 0x20
    NSMutableDictionary *_userInfo;	// 40 = 0x28
    NSValue *_point;	// 48 = 0x30
    struct CGRect _bounds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000027967
@property(retain, nonatomic) NSValue *point; // @synthesize point=_point;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002791e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000027908
- (void)visit:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027794
- (void)insertPoint:(struct CGPoint)arg1;	// IMP=0x00000000000275a1
- (id)nodeForPoint:(struct CGPoint)arg1;	// IMP=0x00000000000272be
@property(readonly, nonatomic, getter=isLeaf) _Bool leaf;
@property(readonly, copy, nonatomic) NSArray *nodes;
- (id)debugDescription;	// IMP=0x00000000000271df
- (id)debugDescriptionWithLevel:(long long)arg1;	// IMP=0x0000000000026d65
- (id)description;	// IMP=0x0000000000026c3b
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000026a70
- (id)init;	// IMP=0x0000000000026a3e

@end

