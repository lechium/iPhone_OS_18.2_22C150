//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIAction;

__attribute__((visibility("hidden")))
@interface _HKDisplayTypeAudiogramContextItemSection : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003210c8
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(retain, nonatomic) UIAction *accessoryButtonAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIAction",?,&,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

