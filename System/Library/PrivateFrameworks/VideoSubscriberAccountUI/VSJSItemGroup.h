//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@protocol VSJSItemGroupBridge;

__attribute__((visibility("hidden")))
@interface VSJSItemGroup : IKJSObject
{
    long long _selectedItem;	// 8 = 0x8
    id <VSJSItemGroupBridge> _bridge;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000bdd4
@property(retain, nonatomic) id <VSJSItemGroupBridge> bridge; // @synthesize bridge=_bridge;
@property(nonatomic) long long selectedItem; // @synthesize selectedItem=_selectedItem;

@end
