//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DragAndDropMapItem, DragAndDropPreview, MKMapView, NSString, SearchResult, UITargetedDragPreview, VKLabelMarker;
@protocol UIDragSession;

@interface MapViewDragSource : NSObject
{
    DragAndDropMapItem *_dragItem;	// 8 = 0x8
    DragAndDropPreview *_previewView;	// 16 = 0x10
    UITargetedDragPreview *_liftPreview;	// 24 = 0x18
    VKLabelMarker *_labelMarker;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    _Bool _draggingCallout;	// 48 = 0x30
    id <UIDragSession> _currentDragSession;	// 56 = 0x38
    MKMapView *_mapView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000aa60e7
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)reset;	// IMP=0x0010000000aa6020
- (void)updatePreviewDrag;	// IMP=0x0010000000aa5e6a
- (void)dragAndDropPreviewDidUpdate:(id)arg1;	// IMP=0x0010000000aa5e0b
- (_Bool)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;	// IMP=0x0010000000aa5e03
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x0010000000aa5c89
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;	// IMP=0x0010000000aa5c81
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x0010000000aa5b22
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0010000000aa5915
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x0010000000aa57ca
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0010000000aa54e1
- (_Bool)_isValidLabelMarkerForDragging:(id)arg1;	// IMP=0x0010000000aa542a
- (_Bool)shouldBeginDragFromLocation:(struct CGPoint)arg1;	// IMP=0x0010000000aa5154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

