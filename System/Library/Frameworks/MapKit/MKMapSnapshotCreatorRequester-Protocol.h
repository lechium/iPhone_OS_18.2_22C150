//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapSnapshotCreator, NSString, UIImage, UIView;

@protocol MKMapSnapshotCreatorRequester <NSObject>
- (void)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 didCreateSnapshot:(UIImage *)arg2 attributionString:(NSString *)arg3 context:(id)arg4;

@optional
- (UIView *)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 viewForContext:(id)arg2;
@end

