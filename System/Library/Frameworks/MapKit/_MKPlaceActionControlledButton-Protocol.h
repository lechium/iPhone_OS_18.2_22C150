//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSAttributedString, NSString, _MKPlaceActionButtonController;

@protocol _MKPlaceActionControlledButton <NSObject>
@property(nonatomic) __weak _MKPlaceActionButtonController *buttonController;
- (void)setPrimaryTitle:(NSString *)arg1 subtitle:(NSString *)arg2;
- (void)setPrimaryTitle:(NSAttributedString *)arg1;
- (void)placeActionButtonControllerTextDidChange:(_MKPlaceActionButtonController *)arg1;
@end
