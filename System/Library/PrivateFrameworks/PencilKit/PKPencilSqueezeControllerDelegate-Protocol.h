//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKPencilSqueezeController;

@protocol PKPencilSqueezeControllerDelegate <NSObject>

@optional
- (void)pencilSqueezeControllerDidChangePaletteViewVisibility:(PKPencilSqueezeController *)arg1;
- (void)pencilSqueezeControllerWillChangePaletteViewVisibility:(PKPencilSqueezeController *)arg1 toVisible:(_Bool)arg2;
- (_Bool)pencilSqueezeControllerCanShowPaletteView:(PKPencilSqueezeController *)arg1;
@end
