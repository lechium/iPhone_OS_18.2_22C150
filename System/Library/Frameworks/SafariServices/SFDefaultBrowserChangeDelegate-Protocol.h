//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString;

@protocol SFDefaultBrowserChangeDelegate <NSObject>
- (void)didChangeDefaultBrowserWithBundleIdentifier:(NSString *)arg1 browserChoiceResult:(long long)arg2;
- (void)didCommitDefaultBrowserChoice:(long long)arg1;
@end

