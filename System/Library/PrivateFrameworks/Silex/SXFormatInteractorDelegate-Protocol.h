//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutBlueprint, SXLayoutOptions;
@protocol SXFormatInteractor;

@protocol SXFormatInteractorDelegate <NSObject>

@optional
- (void)displayContentsAfterLayoutWithInteractor:(id <SXFormatInteractor>)arg1;
- (void)hideContentsForLayoutWithInteractor:(id <SXFormatInteractor>)arg1;
- (void)interactor:(id <SXFormatInteractor>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 willLayoutWithOptions:(SXLayoutOptions *)arg2;
@end

