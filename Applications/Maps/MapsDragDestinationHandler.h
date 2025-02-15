//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol MapsDragDestinationHandlerDelegate, OS_dispatch_group;

@interface MapsDragDestinationHandler : NSObject
{
    NSArray *_validDropTypes;	// 8 = 0x8
    struct CGPoint _dropLocation;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_analyticsGroup;	// 32 = 0x20
    _Bool _dropConcluded;	// 40 = 0x28
    _Bool _allowsSameSceneDrops;	// 41 = 0x29
    id <MapsDragDestinationHandlerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000592fd3
@property(nonatomic) _Bool allowsSameSceneDrops; // @synthesize allowsSameSceneDrops=_allowsSameSceneDrops;
@property(nonatomic) __weak id <MapsDragDestinationHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_handleString:(id)arg1 nearCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x0010000000592e2e
- (_Bool)handleStrings:(id)arg1;	// IMP=0x0010000000592a68
- (_Bool)handleURLs:(id)arg1;	// IMP=0x00100000005928b1
- (_Bool)handleCalendarEvents:(id)arg1;	// IMP=0x0010000000591c73
- (_Bool)handleVCards:(id)arg1;	// IMP=0x0010000000591a80
- (_Bool)handleMapItems:(id)arg1;	// IMP=0x00100000005919fb
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00100000005919f3
- (void)endDrop:(id)arg1;	// IMP=0x0010000000591933
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x001000000059191e
- (void)performDrop:(id)arg1 finishingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;	// IMP=0x001000000059057f
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x00100000005904a7
- (void)beginDrop:(id)arg1;	// IMP=0x0010000000590434
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x0010000000590341
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x001000000059032c
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00100000005900bd
- (id)init;	// IMP=0x001000000058fef3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

