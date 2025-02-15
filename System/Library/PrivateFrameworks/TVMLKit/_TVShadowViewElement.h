//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _TVShadowViewElementID;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElement : NSObject
{
    _TVShadowViewElementID *_elementID;	// 8 = 0x8
    NSArray *_children;	// 16 = 0x10
    _TVShadowViewElement *_parent;	// 24 = 0x18
    NSString *_resourceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000daf9c
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(nonatomic) __weak _TVShadowViewElement *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) _TVShadowViewElementID *elementID; // @synthesize elementID=_elementID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dadfe
- (unsigned long long)hash;	// IMP=0x00000000000dadba

@end

