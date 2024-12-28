//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout;
@protocol SXDocumentLayout;

@protocol SXColumnCalculator <NSObject>
- (SXColumnLayout *)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 documentLayout:(id <SXDocumentLayout>)arg3;
- (SXColumnLayout *)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id <SXDocumentLayout>)arg3 contentScaleFactor:(double)arg4;
@end
