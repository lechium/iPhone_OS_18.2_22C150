//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PKPass, UIViewController;

@protocol PKPassDeleteHandler <NSObject>
- (_Bool)handleDeletePassRequestWithPass:(PKPass *)arg1 forViewController:(UIViewController *)arg2;

@optional
- (_Bool)isDeletionInProgressForPass:(PKPass *)arg1;
- (void)setDeletionStatusHandler:(void (^)(void))arg1 forPass:(PKPass *)arg2;
@end
