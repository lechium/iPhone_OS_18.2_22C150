//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSOrderedSet, PUPickerAdditionalSelectionState, PUPickerCoordinator;

@protocol PUPickerCoordinatorActionHandler <NSObject>
- (void)_pickerDidPerformConfirmationAction:(PUPickerCoordinator *)arg1;
- (void)_pickerDidPerformCancelAction:(PUPickerCoordinator *)arg1;
- (void)coordinator:(PUPickerCoordinator *)arg1 didFinishPicking:(NSOrderedSet *)arg2 additionalSelectionState:(PUPickerAdditionalSelectionState *)arg3;
@end

