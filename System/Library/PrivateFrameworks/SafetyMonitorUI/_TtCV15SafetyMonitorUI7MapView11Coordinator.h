//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV15SafetyMonitorUI7MapView11Coordinator : NSObject
{
    MISSING_TYPE *geocoder;	// 8 = 0x8
    MISSING_TYPE *parent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006c470
- (id)init;	// IMP=0x000000000006c410
- (void)longPressActionWithSender:(id)arg1;	// IMP=0x000000000006b590
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;	// IMP=0x000000000006ae30
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;	// IMP=0x000000000006adb0
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x000000000006ad30
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x000000000006acb0
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x000000000006abc0

@end

