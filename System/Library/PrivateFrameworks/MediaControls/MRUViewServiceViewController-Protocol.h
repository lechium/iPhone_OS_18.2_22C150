//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPMediaControlsConfiguration;

@protocol MRUViewServiceViewController <NSObject>
@property(copy, nonatomic) CDUnknownBlockType customRowTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration;
- (void)transitionToVisible:(_Bool)arg1 animated:(_Bool)arg2;
@end

