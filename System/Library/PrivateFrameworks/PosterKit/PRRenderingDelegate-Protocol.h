//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PRPosterTransition, PRRenderer, PRRenderingEvent;
@protocol PRPosterRenderingEnvironment;

@protocol PRRenderingDelegate <NSObject>
- (void)rendererDidInvalidate:(PRRenderer *)arg1;
- (void)renderer:(PRRenderer *)arg1 didUpdateEnvironment:(id <PRPosterRenderingEnvironment>)arg2 withTransition:(PRPosterTransition *)arg3;
- (void)renderer:(PRRenderer *)arg1 didInitializeWithEnvironment:(id <PRPosterRenderingEnvironment>)arg2;

@optional
- (void)renderer:(PRRenderer *)arg1 shouldDropExcessResourcesWithCompletionHandler:(void (^)(void))arg2;
- (void)renderer:(PRRenderer *)arg1 didReceiveEvent:(PRRenderingEvent *)arg2;
- (void)renderer:(PRRenderer *)arg1 didReceiveTapAtPoint:(struct CGPoint)arg2;
- (void)rendererDidInvalidate:(PRRenderer *)arg1 completion:(void (^)(void))arg2;
@end
