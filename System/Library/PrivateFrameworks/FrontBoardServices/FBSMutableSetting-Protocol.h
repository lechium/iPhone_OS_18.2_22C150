//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSetting-Protocol.h>

@protocol FBSMutableSetting <FBSSetting>
- (void)setNullPreserving:(_Bool)arg1;
- (void)setPropagating:(_Bool)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDescriptionProvider:(NSString * (^)(id))arg1;
- (void)setPrivacySensitive:(_Bool)arg1;
@end

