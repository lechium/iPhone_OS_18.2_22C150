//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSAttributedString, UIWritingToolsCoordinator, UIWritingToolsCoordinatorAnimationParameters, UIWritingToolsCoordinatorContext;

@protocol UIWritingToolsCoordinatorDelegate <NSObject>
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 finishTextAnimation:(long long)arg2 forRange:(struct _NSRange)arg3 inContext:(UIWritingToolsCoordinatorContext *)arg4 completion:(void (^)(void))arg5;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsPreviewForTextAnimation:(long long)arg2 ofRange:(struct _NSRange)arg3 inContext:(UIWritingToolsCoordinatorContext *)arg4 completion:(void (^)(UITargetedPreview *))arg5;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 prepareForTextAnimation:(long long)arg2 forRange:(struct _NSRange)arg3 inContext:(UIWritingToolsCoordinatorContext *)arg4 completion:(void (^)(void))arg5;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsUnderlinePathsForRange:(struct _NSRange)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 completion:(void (^)(NSArray *))arg4;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsBoundingBezierPathsForRange:(struct _NSRange)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 completion:(void (^)(NSArray *))arg4;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsRangeInContextWithIdentifierForPoint:(struct CGPoint)arg2 completion:(void (^)(struct _NSRange, NSUUID *))arg3;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 selectRanges:(NSArray *)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 completion:(void (^)(void))arg4;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 replaceRange:(struct _NSRange)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 proposedText:(NSAttributedString *)arg4 reason:(long long)arg5 animationParameters:(UIWritingToolsCoordinatorAnimationParameters *)arg6 completion:(void (^)(NSAttributedString *))arg7;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsContextsForScope:(long long)arg2 completion:(void (^)(NSArray *))arg3;

@optional
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 willChangeToState:(long long)arg2 completion:(void (^)(void))arg3;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsDecorationContainerViewForRange:(struct _NSRange)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 completion:(void (^)(UIView *))arg4;
- (void)writingToolsCoordinator:(UIWritingToolsCoordinator *)arg1 requestsSingleContainerSubrangesOfRange:(struct _NSRange)arg2 inContext:(UIWritingToolsCoordinatorContext *)arg3 completion:(void (^)(NSArray *))arg4;
@end

