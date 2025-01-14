//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@protocol MKAnnotationRepresentation;

@protocol MKAnnotationModel <NSObject>
- (void)moveAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2;
- (void)removeAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1;
- (void)addAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 allowAnimation:(_Bool)arg2;
@end

