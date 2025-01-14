//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, NSString, PKPhysicalCardActionController;

@protocol PKPhysicalCardActionControllerDelegate <NSObject>
- (NSString *)presentationSceneIdentifierForPhysicalCardActionController:(PKPhysicalCardActionController *)arg1;
- (void)physicalCardActionController:(PKPhysicalCardActionController *)arg1 didChangeToState:(long long)arg2 withError:(NSError *)arg3;
@end

