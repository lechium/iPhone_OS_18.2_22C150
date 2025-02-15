//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject
{
    IKViewElement *_viewElement;	// 8 = 0x8
    NSString *_itemID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dad92
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)description;	// IMP=0x00000000000dad01
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dabde
- (unsigned long long)hash;	// IMP=0x00000000000dab49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dab3e
- (id)init;	// IMP=0x00000000000dab13
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000000da9a0

@end

