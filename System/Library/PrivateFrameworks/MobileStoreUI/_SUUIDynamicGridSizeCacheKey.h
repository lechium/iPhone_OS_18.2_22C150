//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUUIViewElement;

__attribute__((visibility("hidden")))
@interface _SUUIDynamicGridSizeCacheKey : NSObject
{
    long long _position;	// 8 = 0x8
    SUUIViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000028e455
@property(retain, nonatomic) SUUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028e3ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028e352
- (unsigned long long)hash;	// IMP=0x000000000028e329
- (_Bool)__isSUUIDynamicGridSizeCacheKey;	// IMP=0x000000000028e321

@end

