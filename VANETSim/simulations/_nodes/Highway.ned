package vanetsim.simulations._nodes;

import vanetsim.inet.world.radio.ChannelControl;
import vanetsim.inet.world.traci.TraCIScenarioManagerLaunchd;
import vanetsim.inet.world.obstacles.ObstacleControl;
import vanetsim.inet.world.annotations.AnnotationManager;

module Highway
{
    submodules:
        // Channel control determines which nodes are within communication or interference distance
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        //TraCIScenarioManagerLaunchd controls the creation and movement of nodes
        manager: TraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
        obstacles: ObstacleControl {
            @display("p=282,108");
        }
        annotations: AnnotationManager {
			@display("p=144,108");
		}
}
