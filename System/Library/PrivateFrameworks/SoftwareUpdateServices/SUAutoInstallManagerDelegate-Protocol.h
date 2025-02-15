//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class NSError, SUAutoInstallManager, _SUAutoInstallOperationModel;

@protocol SUAutoInstallManagerDelegate <NSObject>
- (void)autoInstallManager:(SUAutoInstallManager *)arg1 passcodePolicyChanged:(unsigned long long)arg2 forOperation:(_SUAutoInstallOperationModel *)arg3;
- (void)autoInstallManager:(SUAutoInstallManager *)arg1 isReadyToInstall:(_SUAutoInstallOperationModel *)arg2 withResult:(void (^)(_Bool, NSError *))arg3;
- (void)autoInstallManager:(SUAutoInstallManager *)arg1 didExpireOperation:(_SUAutoInstallOperationModel *)arg2 withError:(NSError *)arg3;
- (void)autoInstallManager:(SUAutoInstallManager *)arg1 didCancelOperation:(_SUAutoInstallOperationModel *)arg2;
- (void)autoInstallManager:(SUAutoInstallManager *)arg1 operationWasConsented:(_SUAutoInstallOperationModel *)arg2;
@end

