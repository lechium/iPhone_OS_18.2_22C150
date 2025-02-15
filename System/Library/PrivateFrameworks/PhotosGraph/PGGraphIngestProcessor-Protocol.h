//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGGraphBuilder, PGGraphUpdate;

@protocol PGGraphIngestProcessor <NSObject>
- (void)runWithGraphUpdate:(PGGraphUpdate *)arg1 progressBlock:(void (^)(double, _Bool *))arg2;
- (_Bool)shouldRunWithGraphUpdate:(PGGraphUpdate *)arg1;
- (id)init;
- (id)initWithGraphBuilder:(PGGraphBuilder *)arg1;
@end

