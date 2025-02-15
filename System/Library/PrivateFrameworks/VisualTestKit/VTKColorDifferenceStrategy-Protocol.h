//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualTestKit/NSObject-Protocol.h>

@protocol VTKColor;

@protocol VTKColorDifferenceStrategy <NSObject>
@property(readonly, nonatomic) double tolerance;
- (double)differenceBetweenColor:(id <VTKColor>)arg1 andColor:(id <VTKColor>)arg2;

@optional
- (double)antiAliasingDifferenceBetweenColor:(id <VTKColor>)arg1 andColor:(id <VTKColor>)arg2;
@end

