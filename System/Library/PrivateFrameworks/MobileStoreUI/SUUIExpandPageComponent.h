//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIPageComponent.h"

@class NSMutableArray, SUUIExpandViewElement;

__attribute__((visibility("hidden")))
@interface SUUIExpandPageComponent : SUUIPageComponent
{
    NSMutableArray *_childComponents;	// 8 = 0x8
    SUUIExpandViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012f3f5
@property(readonly, nonatomic) SUUIExpandViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)metricsElementName;	// IMP=0x000000000012f3d7
- (long long)componentType;	// IMP=0x000000000012f3cc
- (id)childComponents;	// IMP=0x000000000012f3b7
- (id)childComponentForIndex:(long long)arg1;	// IMP=0x000000000012f39a
- (id)initWithViewElement:(id)arg1;	// IMP=0x000000000012f140

@end

