//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIEdit/NSObject-Protocol.h>

@class PEEditActionBatch;

@protocol PEEditActionBatchDelegate <NSObject>
- (void)batch:(PEEditActionBatch *)arg1 didCompleteAction:(long long)arg2 hasError:(_Bool)arg3;
- (void)batch:(PEEditActionBatch *)arg1 didCancelAction:(long long)arg2;
- (void)batch:(PEEditActionBatch *)arg1 willStartAction:(long long)arg2;
@end

