//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class CHTextInputTarget, NSArray, NSNumber, NSSet, PKTextInputRecognitionManager, PKTextInputStrokeProvider;

@protocol PKTextInputRecognitionManagerDataSource <NSObject>
- (void)recognitionManager:(PKTextInputRecognitionManager *)arg1 recognitionDidFinishWithQueryItems:(NSArray *)arg2 duration:(double)arg3;
- (void)recognitionManager:(PKTextInputRecognitionManager *)arg1 fetchContentInfoForTextInputTarget:(CHTextInputTarget *)arg2 strokeIdentifiers:(NSSet *)arg3 completion:(void (^)(CHTextInputTargetContentInfo *))arg4;
- (CHTextInputTarget *)recognitionManager:(PKTextInputRecognitionManager *)arg1 textInputTargetForItemStableIdentifier:(NSNumber *)arg2 strokeIdentifiers:(NSSet *)arg3 simultaneousItemStableIdentifiers:(NSArray *)arg4;
- (NSArray *)recognitionManagerTextInputTargets:(PKTextInputRecognitionManager *)arg1;
- (PKTextInputStrokeProvider *)recognitionManagerStrokeProvider:(PKTextInputRecognitionManager *)arg1;
@end

